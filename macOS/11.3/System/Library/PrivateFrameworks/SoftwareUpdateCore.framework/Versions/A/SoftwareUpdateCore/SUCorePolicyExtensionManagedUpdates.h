/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/Versions/A/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <SoftwareUpdateCore/SUCorePolicyExtension.h>
#import <libobjc.A.dylib/SUCorePolicyExtensionProtocol.h>

@class NSString;

@interface SUCorePolicyExtensionManagedUpdates : SUCorePolicyExtension <SUCorePolicyExtensionProtocol> {

	char _supervised;
	char _MDMUseDelayPeriod;
	NSString* _requestedPMV;
	long long _delayPeriodSecs;
	unsigned long long _mdmSoftwareUpdatePath;

}

@property (assign,nonatomic) char supervised;                                       //@synthesize supervised=_supervised - In the implementation block
@property (nonatomic,retain) NSString * requestedPMV;                               //@synthesize requestedPMV=_requestedPMV - In the implementation block
@property (assign,nonatomic) char MDMUseDelayPeriod;                                //@synthesize MDMUseDelayPeriod=_MDMUseDelayPeriod - In the implementation block
@property (assign,nonatomic) long long delayPeriodSecs;                             //@synthesize delayPeriodSecs=_delayPeriodSecs - In the implementation block
@property (assign,nonatomic) unsigned long long mdmSoftwareUpdatePath;              //@synthesize mdmSoftwareUpdatePath=_mdmSoftwareUpdatePath - In the implementation block
+(id)nameForMDMSoftwareUpdatePath:(unsigned long long)arg1 ;
+(char)supportsSecureCoding;
-(char)isRequestedPMVSupervisedPolicy;
-(char)isSupervisedPolicy;
-(NSString *)requestedPMV;
-(unsigned long long)mdmSoftwareUpdatePath;
-(void)extendSoftwareUpdateMAAssetQuery:(id)arg1 ;
-(void)extendDocumentationMAAssetQuery:(id)arg1 ;
-(id)filterSoftwareUpdateAssetArray:(id)arg1 ;
-(id)filterDocumentationAssetArray:(id)arg1 ;
-(void)extendMASoftwareUpdateCatalogDownloadOptions:(id)arg1 ;
-(void)extendMADocumentationCatalogDownloadOptions:(id)arg1 descriptor:(id)arg2 ;
-(void)extendMASoftwareUpdateAssetDownloadOptions:(id)arg1 ;
-(void)extendMADocumentationAssetDownloadOptions:(id)arg1 ;
-(void)extendMSUApplyOptions:(id)arg1 ;
-(id)_filterAssetArray:(id)arg1 ;
-(char)MDMUseDelayPeriod;
-(long long)delayPeriodSecs;
-(void)setMdmSoftwareUpdatePath:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)summary;
-(void)setSupervised:(char)arg1 ;
-(void)setMDMUseDelayPeriod:(char)arg1 ;
-(void)setDelayPeriodSecs:(long long)arg1 ;
-(void)setRequestedPMV:(NSString *)arg1 ;
-(char)supervised;
-(id)extensionName;
@end
