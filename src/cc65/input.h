/*****************************************************************************/
/*                                                                           */
/*				    input.h				     */
/*                                                                           */
/*			      Input file handling			     */
/*                                                                           */
/*                                                                           */
/*                                                                           */
/* (C) 2000      Ullrich von Bassewitz                                       */
/*               Wacholderweg 14                                             */
/*               D-70597 Stuttgart                                           */
/* EMail:        uz@musoftware.de                                            */
/*                                                                           */
/*                                                                           */
/* This software is provided 'as-is', without any expressed or implied       */
/* warranty.  In no event will the authors be held liable for any damages    */
/* arising from the use of this software.                                    */
/*                                                                           */
/* Permission is granted to anyone to use this software for any purpose,     */
/* including commercial applications, and to alter it and redistribute it    */
/* freely, subject to the following restrictions:                            */
/*                                                                           */
/* 1. The origin of this software must not be misrepresented; you must not   */
/*    claim that you wrote the original software. If you use this software   */
/*    in a product, an acknowledgment in the product documentation would be  */
/*    appreciated but is not required.                                       */
/* 2. Altered source versions must be plainly marked as such, and must not   */
/*    be misrepresented as being the original software.                      */
/* 3. This notice may not be removed or altered from any source              */
/*    distribution.                                                          */
/*                                                                           */
/*****************************************************************************/



#ifndef INPUT_H
#define INPUT_H



/*****************************************************************************/
/*	 			     data				     */
/*****************************************************************************/



/* Maximum length of an input line and the corresponding char array */
#define LINEMAX		4095
#define LINESIZE 	LINEMAX+1

/* Input line stuff */
extern char* line;
extern char* lptr;



/*****************************************************************************/
/*	       	     	     	     Code		     		     */
/*****************************************************************************/



void OpenMainFile (const char* Name);
/* Open the main file. Will call Fatal() in case of failures. */

void OpenIncludeFile (const char* Name, unsigned DirSpec);
/* Open an include file and insert it into the tables. */

int NextLine (void);
/* Get a line from the current input. Returns 0 on end of file. */

void ClearLine (void);
/* Clear the current input line */

const char* GetCurrentFile (void);
/* Return the name of the current input file */

unsigned GetCurrentLine (void);
/* Return the line number in the current input file */

int nch (void);
/* Get the next char in input stream (the one behind the current one) */

int cgch (void);
/* Get the current character in the input stream and advance line
 * pointer (unless already at end of line).
 */

int gch (void);
/* Get the current character in the input stream and advance line
 * pointer (no end of line check is performed).
 */





/* End of input.h */
#endif



