/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABDateProvider.h>

@protocol ABDateProvider <NSObject>
@required
-(double)timeIntervalSinceReferenceDate;
-(id)date;
-(double)timeIntervalForDistantPast;

@end


@class NSString;

@interface ABDateProvider : NSObject <ABDateProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(double)timeIntervalSinceReferenceDate;
-(id)date;
-(double)timeIntervalForDistantPast;
@end

