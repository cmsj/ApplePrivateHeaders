/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebDriver.framework/Versions/A/WebDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MultipartFormDataParserDelegate;
@class NSMutableData, NSData, MultipartMessageHeader;

@interface MultipartFormDataParser : NSObject {

	NSMutableData* pendingData;
	NSData* boundaryData;
	MultipartMessageHeader* currentHeader;
	char waitingForCRLF;
	char reachedEpilogue;
	char processedPreamble;
	char checkForContentEnd;
	id<MultipartFormDataParserDelegate> delegate;
	int currentEncoding;
	unsigned long long formEncoding;

}

@property (__weak) id delegate; 
@property (assign) unsigned long long formEncoding; 
+(id)decodedDataFromData:(id)arg1 encoding:(int)arg2 ;
+(id)decodedDataFromQuotedPrintableData:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(char)appendData:(id)arg1 ;
-(int)offsetTillNewlineSinceOffset:(int)arg1 inData:(id)arg2 ;
-(int)processPreamble:(id)arg1 ;
-(int)findHeaderEnd:(id)arg1 fromOffset:(int)arg2 ;
-(int)findContentEnd:(id)arg1 fromOffset:(int)arg2 ;
-(int)numberOfBytesToLeavePendingWithData:(id)arg1 length:(unsigned long long)arg2 encoding:(int)arg3 ;
-(id)initWithBoundary:(id)arg1 formEncoding:(unsigned long long)arg2 ;
-(unsigned long long)formEncoding;
-(void)setFormEncoding:(unsigned long long)arg1 ;
@end

