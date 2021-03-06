/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface TUCallGroup : NSObject {

	NSArray* _calls;

}

@property (nonatomic,copy,readonly) NSArray * calls;                     //@synthesize calls=_calls - In the implementation block
@property (nonatomic,readonly) int status; 
@property (nonatomic,copy,readonly) NSString * displayName; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSString *)displayName;
-(int)status;
-(NSArray *)calls;
-(id)initWithCalls:(id)arg1 ;
-(id)initWithCall:(id)arg1 ;
-(char)isEqualToCallGroup:(id)arg1 ;
@end

