/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OCPPackageRelationshipCollection, OCPPackageProperties, NSMutableDictionary;

@interface OCPPackage : NSObject {

	OCPPackageRelationshipCollection* mRelationships;
	OCPPackageProperties* mProperties;
	NSMutableDictionary* mDefaultContentTypes;
	NSMutableDictionary* mContentTypeOverrides;

}
-(id)init;
-(id)properties;
-(id)mainDocumentPart;
-(id)relationshipsByType:(id)arg1 ;
-(id)partForLocation:(id)arg1 ;
-(id)contentTypeForPartLocation:(id)arg1 ;
-(void)resetPartForLocation:(id)arg1 ;
-(id)partByRelationshipType:(id)arg1 ;
-(id)relationshipForIdentifier:(id)arg1 ;
-(void)readContentTypesXml:(xmlDoc*)arg1 ;
-(id)initWithRelationshipsXml:(xmlDoc*)arg1 corePropertiesXml:(xmlDoc*)arg2 appPropertiesXml:(xmlDoc*)arg3 contentTypesXml:(xmlDoc*)arg4 ;
-(void)readDefaultContentTypeFromElement:(xmlNode*)arg1 ;
-(void)readContentTypeOverrideFromElement:(xmlNode*)arg1 ;
@end

