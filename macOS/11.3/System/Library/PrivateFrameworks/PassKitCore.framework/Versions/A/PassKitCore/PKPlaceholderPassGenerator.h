/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, PKPass, NSMutableDictionary, NSString, NSArray;

@interface PKPlaceholderPassGenerator : NSObject {

	NSURL* _templateDirectory;
	PKPass* _templatePass;
	NSMutableDictionary* _passContent;

}

@property (nonatomic,retain) NSMutableDictionary * passContent;                     //@synthesize passContent=_passContent - In the implementation block
@property (nonatomic,copy) NSString * serialNumber; 
@property (nonatomic,copy) NSArray * associatedApplicationIdentifiers; 
@property (nonatomic,copy) NSString * primaryAccountIdentifier; 
+(id)manifestForDirectory:(id)arg1 error:(id*)arg2 ;
+(id)manifestSignatureForDirectory:(id)arg1 passCertificate:(id)arg2 appleWWDRCertificate:(id)arg3 certificatePassword:(id)arg4 error:(id*)arg5 ;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)passTypeIdentifier;
-(void)setPassTypeIdentifier:(id)arg1 ;
-(NSString *)primaryAccountIdentifier;
-(NSArray *)associatedApplicationIdentifiers;
-(void)setAssociatedApplicationIdentifiers:(NSArray *)arg1 ;
-(void)setPrimaryAccountIdentifier:(NSString *)arg1 ;
-(NSMutableDictionary *)passContent;
-(id)generateAndSignPassWithPassCertificate:(id)arg1 appleWWDRCertificate:(id)arg2 certificatePassword:(id)arg3 error:(id*)arg4 ;
-(id)initWithPassTemplate:(id)arg1 error:(id*)arg2 ;
-(void)insertPassField:(id)arg1 ;
-(void)insertPaymentApplication:(id)arg1 ;
-(long long)updatePaymentApplicationsWithBlock:(/*^block*/id)arg1 ;
-(long long)updatePassUpgradeRequestsWithBlock:(/*^block*/id)arg1 ;
-(id)generatePass;
-(void)setPassContent:(NSMutableDictionary *)arg1 ;
@end

