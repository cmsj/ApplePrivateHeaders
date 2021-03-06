/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDate;

@interface CPLResetTracker : NSObject <NSSecureCoding> {

	NSArray* _resetReasons;

}

@property (nonatomic,copy,readonly) NSArray * resetReasons;              //@synthesize resetReasons=_resetReasons - In the implementation block
@property (nonatomic,readonly) NSDate * earliestReasonDate; 
@property (nonatomic,readonly) NSDate * likelyResetDate; 
@property (nonatomic,readonly) char hasReasons; 
+(void)initialize;
+(char)supportsSecureCoding;
+(void)registerLikelyResetReason:(id)arg1 ;
+(void)_storeReasonsLocked;
+(void)_registerReasonLocked:(id)arg1 ;
+(void)registerLikelyResetReason:(id)arg1 arguments:(_va_list_tag*)arg2 ;
+(id)currentTracker;
+(void)discardTracker:(id)arg1 ;
+(id)currentReasonDescriptions;
+(id)registerTentativeResetReasonIfCrashing:(id)arg1 ;
+(void)discardTentativeResetReason:(id)arg1 ;
+(char)shouldIgnoreDefaultsCPLKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithResetReasons:(id)arg1 ;
-(NSDate *)earliestReasonDate;
-(id)likelyResetReasonWithImmediateReason:(id)arg1 ;
-(NSDate *)likelyResetDate;
-(char)hasReasons;
-(NSArray *)resetReasons;
@end

