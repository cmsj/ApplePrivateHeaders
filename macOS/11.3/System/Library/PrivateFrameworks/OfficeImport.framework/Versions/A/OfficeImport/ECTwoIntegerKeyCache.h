/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OITSUIntegerKeyDictionary;

@interface ECTwoIntegerKeyCache : NSObject {

	OITSUIntegerKeyDictionary* mCache;
	char _assertForCollisions;

}

@property (assign,nonatomic) char assertForCollisions;              //@synthesize assertForCollisions=_assertForCollisions - In the implementation block
-(id)init;
-(void)setObject:(id)arg1 forKey1:(long long)arg2 key2:(long long)arg3 ;
-(char)assertForCollisions;
-(void)setAssertForCollisions:(char)arg1 ;
-(id)objectForKey1:(long long)arg1 key2:(long long)arg2 ;
@end

