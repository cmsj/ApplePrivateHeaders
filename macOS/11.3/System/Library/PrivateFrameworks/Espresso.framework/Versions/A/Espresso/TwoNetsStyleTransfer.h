/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Versions/A/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Espresso/Espresso-Structs.h>
@class NSString;

@interface TwoNetsStyleTransfer : NSObject {

	void* ctx;
	void* plan;
	SCD_Struct_ET44* net;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> output_layer_name;
	unsigned long long dim_data0[5];
	unsigned long long dim_data0__small[5];
	unsigned long long dim_data2[5];
	unsigned long long dim_data2__small[5];
	IOSurfaceRef result;
	postprocessing_settings_t current_postprocessing_settings;
	NSString* currentNetworkPath;

}
+(char)supportsANE;
-(void)dealloc;
-(id)init;
-(int)load:(id)arg1 outputName:(id)arg2 ;
-(int)widthSmall;
-(int)widthBig;
-(int)heightSmall;
-(int)heightBig;
-(IOSurfaceRef)executeSyncWithImage:(CVBufferRef)arg1 smallImage:(CVBufferRef)arg2 ;
@end

