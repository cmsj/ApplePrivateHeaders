/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@interface _MKPinAnnotationViewImageCache : NSObject {

	GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>* _pool;
	GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, geo::GEOGenericContainerStrongReferenceTag, 64, 2097152, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>* _cache;

}
-(id)init;
-(void)flush;
-(id)pinsWithMapType:(unsigned long long)arg1 pinColor:(id)arg2 effectiveAppearance:(id)arg3 ;
-(void)setPins:(id)arg1 forMapType:(unsigned long long)arg2 pinColor:(id)arg3 effectiveAppearance:(id)arg4 ;
@end

