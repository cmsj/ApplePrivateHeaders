/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityInterface/SecurityInterface-Structs.h>
#import <libobjc.A.dylib/LAUIAuthenticationSheetDelegate.h>

@class LAUIAuthenticationSheetController, NSMutableSet, NSString;

@interface SheetSupport : NSObject <LAUIAuthenticationSheetDelegate> {

	id _laContext;
	LAUIAuthenticationSheetController* _sheetController;
	AuthorizationOpaqueRefRef _authorization;
	const SCD_Struct_SF0* _rights;
	SCD_Struct_SF0* _authorizedRights;
	SCD_Struct_SF0* _environment;
	unsigned _flags;
	int _sheetResult;
	char _checkRights;
	unsigned long long _originalEnvironmentItemsCount;
	long long _authType;
	NSMutableSet* _requiredGroups;
	char _passwordOnly;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_legacySmartcard;
+(unsigned char)_isEnvironmentItemBanned:(SCD_Struct_Sh15*)arg1 ;
+(Class)_lauiClassFromString:(id)arg1 ;
+(Class)_saClassFromString:(id)arg1 ;
+(void*)_loadSystemAdministrationFramework;
+(void*)_loadLAUI;
-(id)initWithAuthorization:(AuthorizationOpaqueRefRef)arg1 andRights:(const SCD_Struct_SF0*)arg2 checkRights:(char)arg3 ;
-(char)shouldUseSheet;
-(int)doSheetAuthorization:(unsigned)arg1 environment:(const SCD_Struct_SF0*)arg2 forWindow:(id)arg3 authorizedRights:(/*function pointer*/void**)arg4 ;
-(void)clearAuthorizedRights;
-(void)_processRightProperties;
-(int)_processSheetCredentials:(unsigned)arg1 providedUid:(int)arg2 ;
-(void)_finishSheet;
-(void)dealloc;
-(id)init;
-(long long)unverifiedDataEntered:(unsigned)arg1 ;
@end
