/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectModel, NSString;

@interface PFCloudKitModelValidator : NSObject {

	NSManagedObjectModel* _model;
	NSString* _configurationName;
	char _skipValueTransformerValidation;
	char _validateLegacyMetadataAttributes;

}

@property (assign,nonatomic) char skipValueTransformerValidation;                //@synthesize skipValueTransformerValidation=_skipValueTransformerValidation - In the implementation block
@property (assign,nonatomic) char validateLegacyMetadataAttributes;              //@synthesize validateLegacyMetadataAttributes=_validateLegacyMetadataAttributes - In the implementation block
+(id)stringFromDeleteRule:(unsigned long long)arg1 ;
+(char)enforceUniqueConstraintChecks;
-(id)initWithManagedObjectModel:(id)arg1 configuration:(id)arg2 ;
-(void)setSkipValueTransformerValidation:(char)arg1 ;
-(char)_validateManagedObjectModel:(id)arg1 error:(id*)arg2 ;
-(char)validateEntities:(id)arg1 error:(id*)arg2 ;
-(char)validateEntity:(id)arg1 hasAttributeNamed:(id)arg2 ofType:(unsigned long long)arg3 andReturnFailureReason:(id*)arg4 ;
-(char)skipValueTransformerValidation;
-(char)validateLegacyMetadataAttributes;
-(void)setValidateLegacyMetadataAttributes:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(char)validate:(id*)arg1 ;
@end
