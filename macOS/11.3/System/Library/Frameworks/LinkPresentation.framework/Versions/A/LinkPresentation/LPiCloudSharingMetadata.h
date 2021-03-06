/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataBackwardCompatibility.h>

@class NSString, LPImage;

@interface LPiCloudSharingMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility> {

	NSString* _applicationBundleIdenfier;
	NSString* _application;
	NSString* _title;
	LPImage* _icon;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * applicationBundleIdenfier;              //@synthesize applicationBundleIdenfier=_applicationBundleIdenfier - In the implementation block
@property (nonatomic,copy) NSString * application;                            //@synthesize application=_application - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) LPImage * icon;                                  //@synthesize icon=_icon - In the implementation block
+(char)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+(id)_bundleIdentifierMap;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)application;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setIcon:(LPImage *)arg1 ;
-(LPImage *)icon;
-(id)localizedApplicationName;
-(void)setApplication:(NSString *)arg1 ;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg1 ;
-(NSString *)applicationBundleIdenfier;
-(void)setApplicationBundleIdenfier:(NSString *)arg1 ;
-(id)computeIcon;
-(id)_topCaptionStringWithApplicationName:(id)arg1 ;
-(id)_bottomCaptionStringWithApplicationName:(id)arg1 ;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(char)canGeneratePresentationPropertiesForURL:(id)arg1 ;
@end

