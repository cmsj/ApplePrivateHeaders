/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/Versions/A/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSAttribute.h>

@class NSString;

@interface RBSDomainAttribute : RBSAttribute {

	NSString* _domain;
	NSString* _name;
	NSString* _sourceEnvironment;

}

@property (nonatomic,copy) NSString * domain;                                   //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * sourceEnvironment;                        //@synthesize sourceEnvironment=_sourceEnvironment - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullyQualifiedName; 
+(id)attributeWithDomain:(id)arg1 name:(id)arg2 ;
+(id)attributeWithDomain:(id)arg1 name:(id)arg2 sourceEnvironment:(id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)domain;
-(void)setName:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(NSString *)sourceEnvironment;
-(id)_initWithDomain:(id)arg1 name:(id)arg2 sourceEnvironment:(id)arg3 ;
-(void)setSourceEnvironment:(NSString *)arg1 ;
-(NSString *)fullyQualifiedName;
@end

