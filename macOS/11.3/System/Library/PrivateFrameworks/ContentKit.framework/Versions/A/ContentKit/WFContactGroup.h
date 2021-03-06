/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFNaming.h>

@class NSString, NSArray;

@interface WFContactGroup : NSObject <WFNaming>

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(Class)preferredConcreteSubclass;
+(id)allContactGroups;
+(id)contactGroupWithName:(id)arg1 ;
-(NSString *)name;
-(NSArray *)contacts;
-(char)containsContact:(id)arg1 ;
-(NSString *)wfName;
@end

