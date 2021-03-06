/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ICURLBag, NSNumber, ICDelegateToken;

@interface ICStoreURLRequestBuilderProperties : NSObject {

	NSString* _iCloudPersonID;
	ICURLBag* _URLBag;
	NSNumber* _DSID;
	NSString* _storefrontIdentifier;
	NSNumber* _delegatedDSID;
	NSString* _delegatedStorefrontIdentifier;
	ICDelegateToken* _delegateToken;
	ICURLBag* _delegatedURLBag;

}

@property (nonatomic,copy) NSString * iCloudPersonID;                             //@synthesize iCloudPersonID=_iCloudPersonID - In the implementation block
@property (nonatomic,retain) ICURLBag * URLBag;                                   //@synthesize URLBag=_URLBag - In the implementation block
@property (nonatomic,copy) NSNumber * DSID;                                       //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * storefrontIdentifier;                       //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * delegatedDSID;                              //@synthesize delegatedDSID=_delegatedDSID - In the implementation block
@property (nonatomic,copy) NSString * delegatedStorefrontIdentifier;              //@synthesize delegatedStorefrontIdentifier=_delegatedStorefrontIdentifier - In the implementation block
@property (nonatomic,copy) ICDelegateToken * delegateToken;                       //@synthesize delegateToken=_delegateToken - In the implementation block
@property (nonatomic,retain) ICURLBag * delegatedURLBag;                          //@synthesize delegatedURLBag=_delegatedURLBag - In the implementation block
-(void)setDSID:(NSNumber *)arg1 ;
-(NSNumber *)DSID;
-(ICDelegateToken *)delegateToken;
-(void)setDelegateToken:(ICDelegateToken *)arg1 ;
-(NSString *)storefrontIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(void)setICloudPersonID:(NSString *)arg1 ;
-(NSString *)iCloudPersonID;
-(ICURLBag *)URLBag;
-(void)setURLBag:(ICURLBag *)arg1 ;
-(NSNumber *)delegatedDSID;
-(void)setDelegatedDSID:(NSNumber *)arg1 ;
-(NSString *)delegatedStorefrontIdentifier;
-(void)setDelegatedStorefrontIdentifier:(NSString *)arg1 ;
-(ICURLBag *)delegatedURLBag;
-(void)setDelegatedURLBag:(ICURLBag *)arg1 ;
@end

