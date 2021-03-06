/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FCAccessCheckResult : NSObject <NSCopying> {

	char _canAccess;
	unsigned long long _blockedReason;

}

@property (nonatomic,readonly) char canAccess;                                //@synthesize canAccess=_canAccess - In the implementation block
@property (nonatomic,readonly) unsigned long long blockedReason;              //@synthesize blockedReason=_blockedReason - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithCanAccess:(char)arg1 blockedReason:(unsigned long long)arg2 ;
-(char)canAccess;
-(unsigned long long)blockedReason;
@end

