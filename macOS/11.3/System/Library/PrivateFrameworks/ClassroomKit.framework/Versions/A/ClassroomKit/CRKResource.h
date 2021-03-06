/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDictionary;

@interface CRKResource : NSObject <NSSecureCoding> {

	char _zippedBundle;
	NSURL* _hostedURL;

}

@property (nonatomic,retain) NSURL * hostedURL;                                    //@synthesize hostedURL=_hostedURL - In the implementation block
@property (assign,getter=isZippedBundle,nonatomic) char zippedBundle;              //@synthesize zippedBundle=_zippedBundle - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryValue;
-(NSURL *)hostedURL;
-(char)isZippedBundle;
-(id)initWithHostedURL:(id)arg1 isZippedBundle:(char)arg2 ;
-(char)isEqualToHostedResource:(id)arg1 ;
-(void)setHostedURL:(NSURL *)arg1 ;
-(void)setZippedBundle:(char)arg1 ;
@end

