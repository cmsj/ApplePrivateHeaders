/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/EDKeyedCollection.h>

@interface EDContentFormatsCollection : EDKeyedCollection {

	unsigned long long mNextContentFormatId;

}
-(id)init;
-(unsigned long long)addObject:(id)arg1 ;
-(unsigned long long)addOrEquivalentObject:(id)arg1 ;
-(void)setupDefaults;
-(void)addDefaultWithNSString:(id)arg1 formatId:(unsigned long long)arg2 ;
-(BOOL)isOverwritingKeyOK;
@end

