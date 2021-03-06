/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class INCustomObject;

@interface WFCustomIntentOutputContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) INCustomObject * customObject; 
+(char)supportsSecureCoding;
+(id)typeDescription;
+(id)codableDescription;
+(char)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)pluralTypeDescription;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForKeyedArchiver;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
-(char)getListSubtitle:(/*^block*/id)arg1 ;
-(char)getListThumbnail:(/*^block*/id)arg1 forSize:(CGSize)arg2 ;
-(INCustomObject *)customObject;
@end

