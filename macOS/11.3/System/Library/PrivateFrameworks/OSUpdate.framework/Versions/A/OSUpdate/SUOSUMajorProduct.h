/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSUpdate.framework/Versions/A/OSUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSUpdate/SUOSUProduct.h>

@class SUMajorProduct, NSDate, NSString, NSImage;

@interface SUOSUMajorProduct : SUOSUProduct {

	char __adminDeferred;
	SUMajorProduct* _majorProduct;
	NSDate* __adminDeferredDate;

}

@property (retain) NSDate * _adminDeferredDate;                         //@synthesize _adminDeferredDate=__adminDeferredDate - In the implementation block
@property (assign) char _adminDeferred;                                 //@synthesize _adminDeferred=__adminDeferred - In the implementation block
@property (readonly) SUMajorProduct * majorProduct;                     //@synthesize majorProduct=_majorProduct - In the implementation block
@property (readonly) NSString * majorOSDisplayTitle; 
@property (readonly) NSString * majorOSBundleIdentifier; 
@property (readonly) NSString * majorOSDisplayVersion; 
@property (readonly) NSString * majorOSMoreInfoLinkString; 
@property (readonly) NSImage * majorOSIconImage; 
@property (readonly) char isAdminDeferred; 
-(id)description;
-(char)isAdminDeferred;
-(id)initWithUpdateProduct:(id)arg1 withMajorProduct:(id)arg2 ;
-(id)initWithUpdateProduct:(id)arg1 ;
-(NSString *)majorOSBundleIdentifier;
-(SUMajorProduct *)majorProduct;
-(void)updateMajorProduct:(id)arg1 ;
-(id)initWithAppStoreUpdate:(id)arg1 withMajorProduct:(id)arg2 ;
-(id)installerApplicationBundleURLOnDisk;
-(id)initWithAppStoreUpdate:(id)arg1 ;
-(id)deferralEnablementDate;
-(char)_adminDeferred;
-(NSDate *)_adminDeferredDate;
-(NSString *)majorOSDisplayTitle;
-(NSString *)majorOSDisplayVersion;
-(NSImage *)majorOSIconImage;
-(NSString *)majorOSMoreInfoLinkString;
-(void)set_adminDeferredDate:(NSDate *)arg1 ;
-(void)set_adminDeferred:(char)arg1 ;
@end

