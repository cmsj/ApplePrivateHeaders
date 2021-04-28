/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdate/SUPackageSource.h>

@class NSMutableDictionary;

@interface SUCatalogPackageSource : SUPackageSource {

	NSMutableDictionary* _packageReferencesByProduct;
	NSMutableDictionary* _digestByPackageURLPath;
	NSMutableDictionary* _extraPackageReferencesByProduct;

}
+(char)supportsSecureCoding;
-(id)initWithCatalog:(id)arg1 ;
-(id)_packageDictionaryForProductKey:(id)arg1 matchingPackageURL:(id)arg2 ;
-(id)descriptionForProduct:(id)arg1 ;
-(void)registerExtraPackageReference:(id)arg1 forProductKey:(id)arg2 ;
-(void)unregisterExtraPackageReference:(id)arg1 forProductKey:(id)arg2 ;
-(char)registerProduct:(id)arg1 ;
-(id)digestForPackageAtURLPath:(id)arg1 ;
-(id)packageReferencesMatchingIdentifier:(id)arg1 version:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allPackageReferences;
@end
