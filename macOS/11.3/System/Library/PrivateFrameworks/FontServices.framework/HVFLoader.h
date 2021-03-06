/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/libhvf.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libhvf.dylib/libhvf.dylib-Structs.h>
@interface HVFLoader : NSObject {

	LoaderCBF* loader;

}

@property (nonatomic,readonly) id partLoader; 
-(id)initWithTableData:(id)arg1 ;
-(unsigned long long)countParts;
-(id)partLoader;
-(HVF_Part*)loadPartAtIndex:(unsigned long long)arg1 usingPartCache:(HVF_PartCache*)arg2 ;
@end

