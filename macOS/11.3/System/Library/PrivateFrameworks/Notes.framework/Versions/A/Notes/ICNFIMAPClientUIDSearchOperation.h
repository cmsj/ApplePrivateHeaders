/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <Notes/ICNFIMAPClientUIDOperation.h>

@class NSArray, NSMutableIndexSet;

@interface ICNFIMAPClientUIDSearchOperation : ICNFIMAPClientUIDOperation {

	NSArray* _terms;
	NSMutableIndexSet* _matchingUIDs;

}

@property (copy) NSArray * terms;                                 //@synthesize terms=_terms - In the implementation block
@property (retain) NSMutableIndexSet * matchingUIDs;              //@synthesize matchingUIDs=_matchingUIDs - In the implementation block
-(NSArray *)terms;
-(void)setTerms:(NSArray *)arg1 ;
-(id)activityString;
-(id)commandTypeString;
-(char)executeOnConnection:(id)arg1 ;
-(id)newCommandDataForLiteralPlus:(char)arg1 ;
-(void)setMatchingUIDs:(NSMutableIndexSet *)arg1 ;
-(id)initWithMailboxName:(id)arg1 UIDs:(id)arg2 ;
-(id)initWithMailboxName:(id)arg1 range:(NSRange)arg2 terms:(id)arg3 ;
-(NSMutableIndexSet *)matchingUIDs;
-(id)initWithMailboxName:(id)arg1 range:(NSRange)arg2 ;
-(id)_newArgumentForSearchTerm:(id)arg1 isLiteral:(char*)arg2 ;
-(id)debugCommandString;
@end
