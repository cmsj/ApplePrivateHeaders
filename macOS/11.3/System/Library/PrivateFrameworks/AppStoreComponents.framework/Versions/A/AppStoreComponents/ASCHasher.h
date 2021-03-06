/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/Versions/A/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData;

@interface ASCHasher : NSObject {

	char _isFinalized;
	NSMutableData* _buffer;

}

@property (nonatomic,readonly) NSMutableData * buffer;              //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) char isFinalized;                      //@synthesize isFinalized=_isFinalized - In the implementation block
+(unsigned long long)executionSeed;
-(id)init;
-(NSMutableData *)buffer;
-(void)combineBool:(char)arg1 ;
-(void)combineInteger:(long long)arg1 ;
-(char)isFinalized;
-(void)combineObject:(id)arg1 ;
-(unsigned long long)finalizeHash;
-(void)combineDouble:(double)arg1 ;
-(void)combineBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)setIsFinalized:(char)arg1 ;
-(void)combineUnsignedInteger:(unsigned long long)arg1 ;
@end

