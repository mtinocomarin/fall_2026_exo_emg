// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_8\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.06%
// test_accuracy: 56.25%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_3.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_28.txt']}
// generated: 2025-12-17 13:45:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.678276, 0.678361,
    0.299876, -0.300076,
    0.272195, -0.272162,
    -0.191686, 0.191787,
    -0.535180, 0.535232,
    -0.186000, 0.185952,
    0.320489, -0.320506,
    0.102085, -0.102097,
    -0.798418, 0.798364,
    0.328881, -0.328746,
    -0.166336, 0.166288,
    0.319204, -0.319255,
};

float Cg_init[2] = {
    -0.308933, -0.308946
};

float xstd_init[12] = {
    0.001030, 0.000081, 0.011157, 0.078886, 0.002939, 0.000829, 0.084819, 0.172303, 0.000888, 0.000112, 0.016877, 0.075098
};

float xmean_init[12] = {
    0.006473, -0.007685, 0.004206, 0.143810, 0.008651, -0.006852, 0.102857, 0.444881, 0.004359, -0.007717, 0.008333, 0.128214
};

