/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/ICNFIMAPFetchResult.h>

@class NSData, NSString;

@interface ICNFIMAPBodyFetchResult : ICNFIMAPFetchResult {

	unsigned _startOffset;
	NSData* _fetchData;

}

@property (nonatomic,copy,readonly) NSString * section; 
@property (nonatomic,retain) NSData * fetchData;                     //@synthesize fetchData=_fetchData - In the implementation block
@property (assign,nonatomic) unsigned startOffset;                   //@synthesize startOffset=_startOffset - In the implementation block
-(id)description;
-(NSString *)section;
-(unsigned)startOffset;
-(void)setStartOffset:(unsigned)arg1 ;
-(NSData *)fetchData;
-(void)setFetchData:(NSData *)arg1 ;
@end

