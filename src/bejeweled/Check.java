/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package bejeweled;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author shital
 */

class Chain
{
	public int start;
	public int end;
	public int length;
}

public class Check {
    private static int CHAIN_LENGTH = 3;

    
	private Board board;
	
	public Check(Board board) 
	{
		this.board = board;
	}
	
	public boolean Swap(int srcRow, int srcColumn, 
			   int desRow, int desColumn)
	{
		int X = Math.abs(srcRow - desRow);
		int Y = Math.abs(srcColumn - desColumn);
		
		return (X == 0 && Y == 1) ||		
			   (X == 1 && Y == 0);
	}
	
	public boolean Row(int row)
	{
		List<Position> chain = findChainRow(row);
		
		if(!chain.isEmpty())
		{
			board.removePieces(chain);
		}

		return !chain.isEmpty();
	}
	
	public boolean Column(int column)
	{
		List<Position> chain = findChainColumn(column);

		if(!chain.isEmpty())
		{
			board.removePieces(chain);
		}
		
		return !chain.isEmpty();
	}
	
	private List<Position> findChainRow(int row)
	{
		List<Piece> jewels = board.getRow(row);
		Chain chain = findChain(jewels);

		if(chain.length < CHAIN_LENGTH ) 
		{
			return new ArrayList<Position>();
		}
               
                    

		List<Position> pieces = new ArrayList<Position>();
		
		for(int column = chain.start; column <= chain.end; column++)
		{
			pieces.add(new Position(row, column));
		}
		
		return pieces;
	}
	
	private List<Position> findChainColumn(int column)
	{
		List<Piece> jewels = board.getColumn(column);
		Chain chain = findChain(jewels);
		
		if(chain.length < CHAIN_LENGTH)
		{
			return new ArrayList<Position>();
		}
		
		List<Position> pieces = new ArrayList<Position>();
		
		for(int row = chain.start; row <= chain.end; row++)
		{
			pieces.add(new Position(row, column));
		}
		
		return pieces;
	}

	private Chain findChain(List<Piece> pieces)
	{
		Chain chain = new Chain();
		chain.length = 1;
		
		for(int i = 0; i < pieces.size() - 1; i++)
		{
			Piece currentPiece = pieces.get(i);
			Piece nextPiece = pieces.get(i + 1);
			
			if(currentPiece.equals(nextPiece))
			{
				chain.length++;
				
				if(chain.length >= CHAIN_LENGTH )
				{
					chain.end = i + 1;
					break;
				}
			}
			else
			{
				chain.start = i + 1;
				chain.length = 1;
			}
		}
		
		return chain;		
	}
	
	public void Board()
	{
		boolean piecesRemoved = false;
		
		do
		{
			piecesRemoved = false;
			
			for(int row = 0; row < board.totalRows; row++)
			{
				piecesRemoved = piecesRemoved || Row(row);
			}
	
			for(int column = 0; column < board.totalColumns; column++)
			{
				piecesRemoved = piecesRemoved || Column(column);
			}
		}
		while(piecesRemoved);
	}
    
}
