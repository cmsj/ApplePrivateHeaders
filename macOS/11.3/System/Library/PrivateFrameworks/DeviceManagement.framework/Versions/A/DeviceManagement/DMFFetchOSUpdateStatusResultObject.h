/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/Versions/A/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFFetchOSUpdateStatusResultObject : CATTaskResultObject {

	NSString* _productKey;
	unsigned long long _status;
	double _downloadPercentComplete;

}

@property (nonatomic,copy) NSString * productKey;                         //@synthesize productKey=_productKey - In the implementation block
@property (assign,nonatomic) unsigned long long status;                   //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double downloadPercentComplete;              //@synthesize downloadPercentComplete=_downloadPercentComplete - In the implementation block
+(char)supportsSecureCoding;
+(id)descriptionForStatus:(unsigned long long)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(NSString *)productKey;
-(double)downloadPercentComplete;
-(id)initWithProductKey:(id)arg1 status:(unsigned long long)arg2 downloadPercentComplete:(double)arg3 ;
-(void)setProductKey:(NSString *)arg1 ;
-(void)setDownloadPercentComplete:(double)arg1 ;
@end
