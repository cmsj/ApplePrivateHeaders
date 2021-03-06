/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLSClassificationBasedSignalModel.h>

@class CLSSignalNode, NSString;

@interface CLSTabooEventModel : NSObject <CLSClassificationBasedSignalModel> {

	unsigned long long _version;
	unsigned long long _minimumSupportedVersion;
	CLSSignalNode* _bloodNode;
	CLSSignalNode* _demonstrationNode;
	CLSSignalNode* _destructionNode;
	CLSSignalNode* _fireDevastationNode;
	CLSSignalNode* _floodDevastationNode;
	CLSSignalNode* _funeralNode;
	CLSSignalNode* _hospitalNode;
	CLSSignalNode* _religiousSettingNode;
	CLSSignalNode* _vehicleCrashNode;
	CLSSignalNode* _warNode;

}

@property (readonly) unsigned long long version;                              //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long minimumSupportedVersion;              //@synthesize minimumSupportedVersion=_minimumSupportedVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)name;
+(unsigned long long)latestVersion;
+(unsigned long long)currentAnalyzerVersion;
+(id)modelWithVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(id)initWithVersion:(unsigned long long)arg1 ;
-(id)modelInfo;
-(unsigned long long)minimumSupportedVersion;
-(id)nodeForSignalIdentifier:(unsigned long long)arg1 ;
-(char)isResponsibleForSignalIdentifier:(unsigned long long)arg1 ;
-(void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2 ;
-(void)setupVersion32;
-(void)setupVersion33;
-(void)setupVersion50_4;
@end

