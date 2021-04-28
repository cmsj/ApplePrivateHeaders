/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INCodableDescription.h>

@class NSDictionary, NSArray;

@interface INRootCodableDescription : INCodableDescription {

	NSDictionary* _referencedCodableDescriptionsByClassName;
	NSArray* _referencedCodableDescriptions;

}

@property (setter=_setReferencedCodableDescriptions:,nonatomic,retain) NSArray * referencedCodableDescriptions;              //@synthesize referencedCodableDescriptions=_referencedCodableDescriptions - In the implementation block
@property (nonatomic,readonly) NSDictionary * _referencedCodableDescriptionsByClassName;                                     //@synthesize referencedCodableDescriptionsByClassName=_referencedCodableDescriptionsByClassName - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)_referencedCodableDescriptionsByClassName;
-(void)_setReferencedCodableDescriptions:(id)arg1 ;
-(void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg1 ;
-(void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg1 ;
-(NSArray *)referencedCodableDescriptions;
@end
