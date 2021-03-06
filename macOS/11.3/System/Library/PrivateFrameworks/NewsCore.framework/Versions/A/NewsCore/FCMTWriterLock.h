/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFLocking.h>

@protocol NFLocking;
@interface FCMTWriterLock : NSObject <NFLocking> {

	id<NFLocking> _underlyingLock;

}
-(id)init;
-(void)lock;
-(void)unlock;
-(void)performWriteSync:(/*^block*/id)arg1 ;
-(void)performReadSync:(/*^block*/id)arg1 ;
-(void)performWriteByUpgradingReadSync:(/*^block*/id)arg1 ;
-(id)initWithUnderlyingLock:(id)arg1 ;
@end

