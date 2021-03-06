/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBook/AddressBook-Structs.h>
@class NSError;

@interface ABCertificatePanelController : NSObject {

	NSError* _error;
	/*^block*/id _completionHandler;

}

@property (retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)message;
-(void)beginSheetModalForWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)runModal;
-(SecTrustRef)trust;
-(id)cancelButtonTitle;
-(id)failingURL;
-(id)continueButtonTitle;
-(char)isPresentableError;
-(id)certificatePanel;
-(void)certificateTrustSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)allowCertificate;
@end

