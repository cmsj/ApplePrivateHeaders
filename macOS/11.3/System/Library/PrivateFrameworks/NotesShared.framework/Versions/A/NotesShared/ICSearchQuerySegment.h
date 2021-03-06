/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSString;

@interface ICSearchQuerySegment : NSObject {

	char _isExpandable;
	NSString* _segmentString;
	unsigned long long _type;
	NSRange _segmentRange;

}

@property (nonatomic,retain) NSString * segmentString;              //@synthesize segmentString=_segmentString - In the implementation block
@property (assign,nonatomic) NSRange segmentRange;                  //@synthesize segmentRange=_segmentRange - In the implementation block
@property (assign,nonatomic) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char isExpandable;                     //@synthesize isExpandable=_isExpandable - In the implementation block
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(char)isExpandable;
-(NSString *)segmentString;
-(NSRange)segmentRange;
-(id)initWithSegmentString:(id)arg1 range:(NSRange)arg2 type:(unsigned long long)arg3 isExpandable:(char)arg4 ;
-(void)setSegmentString:(NSString *)arg1 ;
-(void)setSegmentRange:(NSRange)arg1 ;
-(void)setIsExpandable:(char)arg1 ;
@end

