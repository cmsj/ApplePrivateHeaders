/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/Versions/A/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticRequestService/DRSRequestMO.h>

@class NSNumber;

@interface DRSTailspinRequestMO : DRSRequestMO

@property (assign,nonatomic) char includeOsLog; 
@property (assign,nonatomic) char includeOsSignpost; 
@property (nonatomic,copy) NSNumber * maxMAT; 
@property (nonatomic,copy) NSNumber * minMAT; 
@property (assign,nonatomic) char scrubbed; 
+(id)fetchRequest;
@end

