/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableIndexSet;

@interface _ICNFUIDsBatch : NSObject {

	unsigned expectedLength;
	NSMutableIndexSet* _uids;

}

@property (nonatomic,retain) NSMutableIndexSet * uids;              //@synthesize uids=_uids - In the implementation block
@property (assign,nonatomic) unsigned expectedLength; 
-(id)description;
-(id)init;
-(NSMutableIndexSet *)uids;
-(void)setUids:(NSMutableIndexSet *)arg1 ;
-(void)setExpectedLength:(unsigned)arg1 ;
-(unsigned)expectedLength;
@end

