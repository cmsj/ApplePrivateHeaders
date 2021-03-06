/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/Versions/A/SearchAds
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, ADInstallAttributionData;

@interface ADResponseData : NSObject {

	NSString* _impressionID;
	NSString* _metadata;
	NSString* _lineItem;
	NSString* _algoID;
	NSString* _privacy;
	NSString* _templateType;
	NSString* _clientRequestID;
	NSDictionary* _format;
	ADInstallAttributionData* _installAttribution;

}

@property (nonatomic,copy,readonly) NSString * impressionID;                                    //@synthesize impressionID=_impressionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * metadata;                                        //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * lineItem;                                        //@synthesize lineItem=_lineItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * algoID;                                          //@synthesize algoID=_algoID - In the implementation block
@property (nonatomic,copy,readonly) NSString * privacy;                                         //@synthesize privacy=_privacy - In the implementation block
@property (nonatomic,copy,readonly) NSString * templateType;                                    //@synthesize templateType=_templateType - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientRequestID;                                 //@synthesize clientRequestID=_clientRequestID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * format;                                      //@synthesize format=_format - In the implementation block
@property (nonatomic,copy,readonly) ADInstallAttributionData * installAttribution;              //@synthesize installAttribution=_installAttribution - In the implementation block
-(NSDictionary *)format;
-(NSString *)metadata;
-(NSString *)lineItem;
-(id)initWithDict:(id)arg1 ;
-(NSString *)clientRequestID;
-(NSString *)templateType;
-(ADInstallAttributionData *)installAttribution;
-(NSString *)impressionID;
-(NSString *)algoID;
-(NSString *)privacy;
@end

