/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDRenderTarget;
#import <VectorKit/VectorKit-Structs.h>
@class VKCamera, VKViewTransform, VKAnchorContext;

@interface VKLayoutContext : NSObject {

	VKCamera* _camera;
	VKCamera* _defaultTrackingCamera;
	id<MDRenderTarget> _canvas;
	BOOL _forceLayout;
	BOOL _iconsShouldAlignToPixels;
	float _styleZAdjust;
	BOOL _preloadOnly;
	VKCamera* _transitionCamera;
	long long _transitionMapMode;
	double _timestamp;
	VKEdgeInsets _labelEdgeInsets;
	int _styleZ;
	float _z;
	BOOL _hasOccluders;
	BOOL _hasMovingOccluders;
	unsigned char _routeStencilRef;
	VKViewTransform* _viewTransform;
	VKAnchorContext* _anchorContext;
	shared_ptr<ggl::PolygonBase::MeshMesh>* _unitMesh;
	shared_ptr<ggl::PolygonBase::MeshMesh>* _polygonUnitMesh;
	shared_ptr<ggl::TextureMesh::MeshMesh>* _unitTextureMesh;
	StencilManager _stencilManager;
	shared_ptr<ggl::Device>* _device;
	Loader* _loader;
	double _labelZoomUpdateTimeStamp;
	float _labelZoom;

}

@property (assign,nonatomic) unsigned char routeStencilRef;                 //@synthesize routeStencilRef=_routeStencilRef - In the implementation block
@property (nonatomic,retain) VKCamera * defaultTrackingCamera;              //@synthesize defaultTrackingCamera=_defaultTrackingCamera - In the implementation block
@property (nonatomic,retain) VKViewTransform * viewTransform;               //@synthesize viewTransform=_viewTransform - In the implementation block
@property (nonatomic,retain) VKAnchorContext * anchorContext;               //@synthesize anchorContext=_anchorContext - In the implementation block
@property (nonatomic,retain) VKCamera * transitionCamera;                   //@synthesize transitionCamera=_transitionCamera - In the implementation block
@property (assign,nonatomic) long long transitionMapMode;                   //@synthesize transitionMapMode=_transitionMapMode - In the implementation block
@property (assign,nonatomic) double timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) VKEdgeInsets labelEdgeInsets;                  //@synthesize labelEdgeInsets=_labelEdgeInsets - In the implementation block
@property (nonatomic,readonly) BOOL hasOverlayInStencil; 
@property (nonatomic,readonly) unsigned char stencilStart; 
@property (nonatomic,readonly) unsigned char stencilEnd; 
@property (nonatomic,readonly) float labelZoom; 
@property (nonatomic,readonly) unsigned char labelIntegerZoom; 
-(void)dealloc;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(DebugConsole*)debugConsoleForId:(int)arg1 ;
-(VKViewTransform *)viewTransform;
-(VKAnchorContext *)anchorContext;
-(void)setTransitionMapMode:(long long)arg1 ;
-(void)setViewTransform:(VKViewTransform *)arg1 ;
-(void)setDefaultTrackingCamera:(VKCamera *)arg1 ;
-(void)canvasDidChange;
-(void)setTransitionCamera:(VKCamera *)arg1 ;
-(long long)transitionMapMode;
-(unsigned char)reserveStencilValues:(unsigned char)arg1 clearItem:(ClearItem*)arg2 ;
-(shared_ptr<ggl::PolygonBase::MeshMesh>*)polygonUnitMesh;
-(id)initWithCanvas:(id)arg1 camera:(id)arg2 device:(const shared_ptr<ggl::Device>*)arg3 ;
-(void)setAnchorContext:(VKAnchorContext *)arg1 ;
-(void)startFrameWithTimeStamp:(double)arg1 ;
-(void)clearCanvas;
-(void)_computeLabelZoom;
-(void)markStencilAsDirty;
-(VKCamera *)transitionCamera;
-(unsigned char)stencilStart;
-(VKCamera *)defaultTrackingCamera;
-(shared_ptr<ggl::TextureMesh::MeshMesh>*)unitTextureMesh;
-(BOOL)hasOverlayInStencil;
-(unsigned char)stencilEnd;
-(shared_ptr<ggl::PolygonBase::MeshMesh>*)unitMesh;
-(void)setRouteStencilRef:(unsigned char)arg1 ;
-(unsigned char)reserveStencilValues:(unsigned char)arg1 clearItem:(ClearItem*)arg2 fromTop:(BOOL)arg3 ;
-(unsigned char)routeStencilRef;
-(unsigned char)labelIntegerZoom;
-(float)labelZoom;
-(void)setLabelEdgeInsets:(VKEdgeInsets)arg1 ;
-(VKEdgeInsets)labelEdgeInsets;
-(Loader*)loader;
-(shared_ptr<ggl::Device>*)device;
@end
