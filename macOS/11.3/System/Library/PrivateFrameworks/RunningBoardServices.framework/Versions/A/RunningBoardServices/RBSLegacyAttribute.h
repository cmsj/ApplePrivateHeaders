/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/Versions/A/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSLegacyAttribute : RBSAttribute {

	unsigned long long _reason;
	unsigned long long _requestedReason;
	unsigned long long _flags;

}

@property (assign,nonatomic) unsigned long long reason;                         //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned long long requestedReason; 
@property (nonatomic,readonly) unsigned long long flags; 
+(id)attributeWithReason:(unsigned long long)arg1 flags:(unsigned long long)arg2 ;
-(unsigned long long)flags;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)reason;
-(void)setReason:(unsigned long long)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(unsigned long long)requestedReason;
@end
