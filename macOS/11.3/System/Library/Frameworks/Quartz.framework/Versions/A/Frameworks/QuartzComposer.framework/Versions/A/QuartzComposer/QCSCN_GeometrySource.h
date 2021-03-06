/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class NSData, NSString;

@interface QCSCN_GeometrySource : NSObject {

	id _reserved;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * semantic; 
@property (nonatomic,readonly) long long vectorCount; 
@property (nonatomic,readonly) char floatComponents; 
@property (nonatomic,readonly) long long componentsPerVector; 
@property (nonatomic,readonly) long long bytesPerComponent; 
@property (nonatomic,readonly) long long dataOffset; 
@property (nonatomic,readonly) long long dataStride; 
+(id)dataWithVector3Array:(SCNVector3*)arg1 count:(long long)arg2 bytesPerComponent:(long long*)arg3 ;
+(id)geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(char)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8 ;
+(id)dataWithPointArray:(CGPoint*)arg1 count:(long long)arg2 bytesPerComponent:(long long*)arg3 ;
+(id)geometrySourceWithVertices:(SCNVector3*)arg1 count:(long long)arg2 ;
+(id)geometrySourceWithNormals:(SCNVector3*)arg1 count:(long long)arg2 ;
+(id)geometrySourceWithTextureCoordinates:(CGPoint*)arg1 count:(long long)arg2 ;
-(void)dealloc;
-(id)init;
-(NSData *)data;
-(NSString *)semantic;
-(long long)dataOffset;
-(_C3DMeshSource*)meshSource;
-(id)initWithMeshSource:(_C3DMeshSource*)arg1 ;
-(int)baseTypeForDataFormat;
-(long long)vectorCount;
-(char)floatComponents;
-(long long)componentsPerVector;
-(long long)bytesPerComponent;
-(long long)dataStride;
@end

