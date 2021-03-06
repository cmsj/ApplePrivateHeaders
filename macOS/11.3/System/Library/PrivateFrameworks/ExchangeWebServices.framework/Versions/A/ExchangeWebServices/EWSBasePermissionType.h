/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class EWSUserIdType, NSString;

@interface EWSBasePermissionType : NSObject <XSDefinitionProvider> {

	char _CanCreateItems;
	char _CanCreateSubFolders;
	char _IsFolderOwner;
	char _IsFolderVisible;
	char _IsFolderContact;
	EWSUserIdType* _UserId;
	long long _EditItems;
	long long _DeleteItems;

}

@property (nonatomic,retain) EWSUserIdType * UserId;                //@synthesize UserId=_UserId - In the implementation block
@property (assign,nonatomic) char CanCreateItems;                   //@synthesize CanCreateItems=_CanCreateItems - In the implementation block
@property (assign,nonatomic) char CanCreateSubFolders;              //@synthesize CanCreateSubFolders=_CanCreateSubFolders - In the implementation block
@property (assign,nonatomic) char IsFolderOwner;                    //@synthesize IsFolderOwner=_IsFolderOwner - In the implementation block
@property (assign,nonatomic) char IsFolderVisible;                  //@synthesize IsFolderVisible=_IsFolderVisible - In the implementation block
@property (assign,nonatomic) char IsFolderContact;                  //@synthesize IsFolderContact=_IsFolderContact - In the implementation block
@property (assign,nonatomic) long long EditItems;                   //@synthesize EditItems=_EditItems - In the implementation block
@property (assign,nonatomic) long long DeleteItems;                 //@synthesize DeleteItems=_DeleteItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(NSString *)description;
-(void)setUserId:(EWSUserIdType *)arg1 ;
-(EWSUserIdType *)UserId;
-(void)setCanCreateSubFolders:(char)arg1 ;
-(void)setIsFolderOwner:(char)arg1 ;
-(void)setIsFolderVisible:(char)arg1 ;
-(void)setIsFolderContact:(char)arg1 ;
-(void)setCanCreateItems:(char)arg1 ;
-(void)setEditItems:(long long)arg1 ;
-(void)setDeleteItems:(long long)arg1 ;
-(char)CanCreateItems;
-(char)CanCreateSubFolders;
-(char)IsFolderOwner;
-(char)IsFolderVisible;
-(char)IsFolderContact;
-(long long)EditItems;
-(long long)DeleteItems;
@end

