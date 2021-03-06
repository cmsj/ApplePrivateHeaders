/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/Versions/A/C2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <C2/C2-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class C2MetricOperationGroupOptions, NSString;

@interface C2MetricOperationOptions : NSObject <NSSecureCoding> {

	C2MetricOperationGroupOptions* _operationGroup;
	NSString* _operationId;
	NSString* _operationType;

}

@property (nonatomic,copy) C2MetricOperationGroupOptions * operationGroup;              //@synthesize operationGroup=_operationGroup - In the implementation block
@property (nonatomic,copy) NSString * operationId;                                      //@synthesize operationId=_operationId - In the implementation block
@property (nonatomic,copy) NSString * operationType;                                    //@synthesize operationType=_operationType - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)operationType;
-(void)setOperationType:(NSString *)arg1 ;
-(NSString *)operationId;
-(void)setOperationId:(NSString *)arg1 ;
-(C2MetricOperationGroupOptions *)operationGroup;
-(void)setOperationGroup:(C2MetricOperationGroupOptions *)arg1 ;
@end

