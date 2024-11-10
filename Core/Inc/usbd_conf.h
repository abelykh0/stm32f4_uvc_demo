#ifndef __USBD_CONF_H
#define __USBD_CONF_H

#define UVC_WIDTH                   320U
#define UVC_HEIGHT                  240U
#define UVC_CAM_FPS_FS              8U
#define UVC_MAX_FRAME_SIZE          (UVC_WIDTH * UVC_HEIGHT * 3U / 2U) // nv12
#define UVC_ISO_FS_MPS              ((unsigned int)(768+2)) //128+130

#endif
