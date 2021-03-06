/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCH3DGLBindable.h>

@class NSString;

@interface TSCH3DGLRenderBuffer : NSObject <TSCH3DGLBindable> {

	unsigned _buffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(char)valid;
-(void)destroyResourcesInContext:(id)arg1 ;
-(void)bindInSession:(id)arg1 ;
-(void)deactivateInContext:(id)arg1 ;
-(id)initWithGLBuffer:(unsigned)arg1 ;
@end

