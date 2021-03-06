/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AMPDevices.framework/Versions/A/AMPDevices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface AMPDeviceSetupInfo : NSObject <NSSecureCoding> {

	char _showLicenseAgreement;
	char _showWarrantyInfo;
	char _suppressRestoreFromBackup;
	NSArray* _backupList;
	long long _bestBackupIndex;
	NSString* _licenseAgreementText;
	NSString* _warrantyInfoText;

}

@property (assign,nonatomic) char showLicenseAgreement;                    //@synthesize showLicenseAgreement=_showLicenseAgreement - In the implementation block
@property (assign,nonatomic) char showWarrantyInfo;                        //@synthesize showWarrantyInfo=_showWarrantyInfo - In the implementation block
@property (assign,nonatomic) char suppressRestoreFromBackup;               //@synthesize suppressRestoreFromBackup=_suppressRestoreFromBackup - In the implementation block
@property (nonatomic,retain) NSArray * backupList;                         //@synthesize backupList=_backupList - In the implementation block
@property (assign,nonatomic) long long bestBackupIndex;                    //@synthesize bestBackupIndex=_bestBackupIndex - In the implementation block
@property (nonatomic,retain) NSString * licenseAgreementText;              //@synthesize licenseAgreementText=_licenseAgreementText - In the implementation block
@property (nonatomic,retain) NSString * warrantyInfoText;                  //@synthesize warrantyInfoText=_warrantyInfoText - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)licenseAgreementText;
-(void)setLicenseAgreementText:(NSString *)arg1 ;
-(char)showLicenseAgreement;
-(void)setShowLicenseAgreement:(char)arg1 ;
-(char)showWarrantyInfo;
-(void)setShowWarrantyInfo:(char)arg1 ;
-(char)suppressRestoreFromBackup;
-(void)setSuppressRestoreFromBackup:(char)arg1 ;
-(NSArray *)backupList;
-(void)setBackupList:(NSArray *)arg1 ;
-(long long)bestBackupIndex;
-(void)setBestBackupIndex:(long long)arg1 ;
-(NSString *)warrantyInfoText;
-(void)setWarrantyInfoText:(NSString *)arg1 ;
@end

