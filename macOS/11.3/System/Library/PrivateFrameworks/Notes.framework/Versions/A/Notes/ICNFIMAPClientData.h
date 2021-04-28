/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notes/Notes-Structs.h>
@class NSMutableData, NSMutableString;

@interface ICNFIMAPClientData : NSObject {

	char _isFrozen;
	NSMutableData* _data;
	NSMutableString* _commandString;
	ICNFIMAPClientData* _nextData;
	NSRange _dontLogRange;

}

@property (retain) NSMutableData * data;                         //@synthesize data=_data - In the implementation block
@property (retain) NSMutableString * commandString;              //@synthesize commandString=_commandString - In the implementation block
@property (retain) ICNFIMAPClientData * nextData;                //@synthesize nextData=_nextData - In the implementation block
@property (assign) NSRange dontLogRange;                         //@synthesize dontLogRange=_dontLogRange - In the implementation block
@property (assign) char isFrozen;                                //@synthesize isFrozen=_isFrozen - In the implementation block
-(id)init;
-(NSMutableData *)data;
-(id)initWithData:(id)arg1 ;
-(void)setData:(NSMutableData *)arg1 ;
-(void)freeze;
-(char)isFrozen;
-(NSMutableString *)commandString;
-(id)initWithStringWaitingForArguments:(id)arg1 ;
-(void)addStringArgument:(id)arg1 ;
-(void)setDontLogRange:(NSRange)arg1 ;
-(void)addDataArgument:(id)arg1 literalPlus:(char)arg2 ;
-(ICNFIMAPClientData *)nextData;
-(void)setCommandString:(NSMutableString *)arg1 ;
-(void)setNextData:(ICNFIMAPClientData *)arg1 ;
-(void)setIsFrozen:(char)arg1 ;
-(NSRange)dontLogRange;
@end
