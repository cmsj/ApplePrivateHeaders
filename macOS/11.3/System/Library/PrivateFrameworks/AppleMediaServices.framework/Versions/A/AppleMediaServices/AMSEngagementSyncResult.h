/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AMSEngagementSyncResult : NSObject <NSSecureCoding> {

	NSArray* _actions;

}

@property (retain) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
+(char)supportsSecureCoding;
+(id)archiveClasses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
@end

