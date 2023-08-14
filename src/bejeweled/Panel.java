/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package bejeweled;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Observable;
import java.util.Observer;
import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;

/**
 *
 * @author shital
 */
public class Panel extends JPanel implements Observer{
    private Board board;
    private Check check;
    private JLabel pointsLabel;
    private int points;
    private JButton[][] button;
    private Position FirstClickMade;
    
    
    public Panel(int rows,int columns)
    {
        createNewBoard(rows,columns);
        createUI();
        refreshUI();
                
    }
    private void createUI()
    {
        JPanel boardpanel = createBoardPanel();
        JPanel bottomPanel = createBotPanel();
        BorderLayout Layout = new BorderLayout();
        setLayout(Layout);
        add(boardpanel,BorderLayout.CENTER);
        add(bottomPanel,BorderLayout.SOUTH);
    }
    private JPanel createBotPanel()
    {
       
        
        this.pointsLabel = new JLabel("Points: ");
        JButton newGame = new JButton("New Game");
        newGame.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                createNewBoard(board.totalRows,board.totalColumns);
                refreshUI();
            }
            });
         BorderLayout border = new BorderLayout();
        JPanel bottompanel = new JPanel(border);
        bottompanel.add(pointsLabel, BorderLayout.WEST);
        bottompanel.add(newGame,BorderLayout.EAST);
        bottompanel.setBorder(BorderFactory.createEmptyBorder(5,5,5,5));
        
        return bottompanel;
    }
    
    
    
    
    
    public void createNewBoard(int rows,int columns)
    {
        
        this.board = new Board(rows,columns);
        this.check = new Check(board);
        check.Board();
        board.addObserver(this);
        this.points= 0;
    }
    private void Points()
    {
            pointsLabel.setText("Points: " +points);
    }
    
    
     
    private void refreshUI()
    {
        for(int row = 0;row<board.totalRows;row++)
        {
            for(int column = 0;column<board.totalColumns;column++)
            {
                updateButton(row,column);
            }
        }
        Points();
    }
    private JPanel createBoardPanel()
    {
        int rows = board.totalRows;
        int columns = board.totalColumns;
        GridLayout g = new GridLayout(rows,columns);
        JPanel  panel = new JPanel(g);
        this.button = new JButton[rows][columns];
        for(int row = 0;row<rows; row++)
        {
            for(int column = 0 ;column<columns;column++)
            {
                button[row][column] = createButton(row,column);
                panel.add(button[row][column]);
            }
        }
       return panel;          
    }
    private JButton createButton(final int row, final int column)
	{
		ActionListener buttonListener = new ActionListener() 
		{
			public void actionPerformed(ActionEvent e) 
			{
				clickedButton(row, column);	
			}
		};
		
		JButton b  = new JButton();
		b.addActionListener(buttonListener);		
		
		return b;
	}
	
	private Color getColor(Piece piece)
	{
		final Color[] colors = new Color[]
	    {  
			Color.BLACK, Color.BLUE, Color.CYAN, 
			Color.GRAY, Color.GREEN, Color.RED, 
			Color.YELLOW, Color.MAGENTA
		};

		return colors[piece.ordinal()];
	}
	
	private void clickedButton(final int row, final int column)
	{
		if(FirstClickMade == null)
		{
			FirstClickMade = new Position(row, column);
		}
		else
		{
			
			new Thread()
			{
				public void run() 
				{
					processMove(row, column);
					FirstClickMade = null;
				}
			}.start();
		}
	}
	
	private void processMove(int row, int column)
	{
		if(check.Swap(FirstClickMade.row, FirstClickMade.column, row, column))
		{
			board.swapPieces(FirstClickMade.row, FirstClickMade.column, row, column);
			check.Board();
		}
		else
		{
			showMessage("Bad Move!");
		}
	}
	
	private void showMessage(String message)
	{
		System.out.println(message);
	}
	
	private void updateButton(int row, int column)
	{
		Piece piece = board.getPiece(row, column);
		Color color = getColor(piece);

		button[row][column].setVisible(!piece.equals(Piece.BLANK));
		button[row][column].setBackground(color);		
	}
	
	public void update(Observable arg0, Object position) 
	{
		BejeweledEvent event = (BejeweledEvent) position;
		Position piece = event.piece;
		
		switch(event.type)
		{
			case Button_Moved:
				updateButton(piece.row, piece.column);
			break;
			
			case Button_Deleted:
				points += 3;
				Points();
			break;
		}
		
		//Pseudo Animation
		try 
		{
			Thread.sleep(50);
		} 
		catch (InterruptedException e) 
		{
			e.printStackTrace();
		}
	}	
    
}
