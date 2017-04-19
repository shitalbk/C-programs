/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package bejeweled;

import java.util.ArrayList;
import java.util.List;
import java.util.Observable;
import java.util.Random;

/**
 *
 * @author shital
 */
enum Piece
{
	BLANK, BLUE, RED, ORANGE, 
	WHITE, GREEN, PURPLE, YELLOW
}

enum EventType
{
	Button_Moved, Button_Deleted
}

class BejeweledEvent
{
	public EventType type;
	public Position piece;
	
	public BejeweledEvent(EventType type, Position piece) 
	{
		this.type = type;
		this.piece = piece;
	}
}

class Position
{
	public int row;
	public int column;

	public Position(int row, int column) 
	{
		this.row = row;
		this.column = column;
	}
	
	public String toString() 
	{
		return row + ":" + column;
	}
}

public class Board extends Observable
{	
	private Piece[][] board;
	public int totalRows;
	public int totalColumns;
	
	public Board(int rows, int columns) 
	{
		this.totalRows = rows;
		this.totalColumns = columns;
		this.board = createBoard();
	}
	
	private Piece[][] createBoard()
	{
		Piece[][] board = new Piece[totalRows][totalColumns];

		for(int row = 0; row < totalRows; row++)
		{
			for(int column = 0; column < totalColumns; column++)
			{
				board[row][column] = getRandom();
			}
		}
		
		return board;
	}
	
	private Piece getRandom()
	{
		Random Generator = new Random();
		int Jewels = Piece.values().length - 1;
		int jewelIndex = Generator.nextInt(Jewels) + 1;

		return Piece.values()[jewelIndex];
	}
	
	public Piece getPiece(int row, int column)
	{
		return board[row][column];
	}
	
	public void setPiece(int row, int column, Piece piece)
	{
		board[row][column] = piece;
		updatePiece(EventType.Button_Moved, row, column);
	}

	public void swapPieces(int srcX, int srcY, int dstX, int dstY)
	{
		Piece firstPiece = getPiece(srcX, srcY);
		Piece secondPiece = getPiece(dstX, dstY);
		
		setPiece(srcX, srcY, secondPiece);
		setPiece(dstX, dstY, firstPiece);
	}
	
	public void removePieces(List<Position> chain)
	{
		for(Position p : chain)
		{
			setPiece(p.row, p.column, Piece.BLANK);
			updatePiece(EventType.Button_Deleted, p.row, p.column);
		}
		
		for(Position p : chain)
		{
			fillBlank(p.row, p.column);
		}		
	}
	
	public void removePiece(int row, int column)
	{
		setPiece(row, column, Piece.BLANK);
		fillBlank(row, column);
	}
	
	public void fillBlank(int row, int column)
	{
		if(row == 0)
		{
			Piece newPiece = getRandom();
			setPiece(row, column, newPiece); 
		}
		else
		{
			Piece topPiece = getPiece(row - 1, column);
			setPiece(row - 1, column, Piece.BLANK);
			setPiece(row, column, topPiece); 
			removePiece(row - 1, column);
		}
	}
	
	public List<Piece> getRow(int row)
	{
		ArrayList<Piece> jewels = new ArrayList<Piece>();
		
		for(int column = 0; column < totalColumns; column++)
		{
			jewels.add(board[row][column]);
		}
		
		return jewels;
	}
	
	public List<Piece> getColumn(int column)
	{
		ArrayList<Piece> jewels = new ArrayList<Piece>();
		
		for(int row = 0; row < totalRows; row++)
		{
			jewels.add(board[row][column]);
		}
		
		return jewels;
	}
	
	private void updatePiece(EventType type, int row, int column)
	{
		Position piece = new Position(row, column);
		BejeweledEvent event = new BejeweledEvent(type, piece);
		
		setChanged();
		notifyObservers(event);
	}

    
}
