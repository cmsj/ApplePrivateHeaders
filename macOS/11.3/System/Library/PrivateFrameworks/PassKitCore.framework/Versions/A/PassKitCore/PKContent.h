/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKBarcode, NSArray, NSURL, NSString;

@interface PKContent : NSObject <NSSecureCoding> {

	PKBarcode* _barcode;
	NSArray* _storeIdentifiers;
	NSURL* _appLaunchURL;
	NSString* _localizedDescription;

}

@property (nonatomic,retain) PKBarcode * barcode;                        //@synthesize barcode=_barcode - In the implementation block
@property (nonatomic,copy) NSArray * storeIdentifiers;                   //@synthesize storeIdentifiers=_storeIdentifiers - In the implementation block
@property (nonatomic,copy) NSURL * appLaunchURL;                         //@synthesize appLaunchURL=_appLaunchURL - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(char)supportsSecureCoding;
+(id)createWithFileURL:(id)arg1 dataTypeIdentifier:(id)arg2 ;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSArray *)storeIdentifiers;
-(void)flushFormattedFieldValues;
-(PKBarcode *)barcode;
-(NSURL *)appLaunchURL;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3 ;
-(void)setStoreIdentifiers:(NSArray *)arg1 ;
-(void)setAppLaunchURL:(NSURL *)arg1 ;
-(void)setBarcode:(PKBarcode *)arg1 ;
@end
