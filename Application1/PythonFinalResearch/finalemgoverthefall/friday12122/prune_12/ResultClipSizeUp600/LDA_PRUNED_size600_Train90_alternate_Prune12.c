// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_12\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 88.45%
// test_accuracy: 78.41%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_32.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 16:08:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.708406, 0.708408,
    -0.229584, 0.229586,
    0.339875, -0.339892,
    0.889344, -0.889337,
    1.078046, -1.078000,
    -1.184123, 1.184047,
    -0.108867, 0.108890,
    -0.155210, 0.155216,
    1.168499, -1.168519,
    -0.284863, 0.284954,
    -0.447059, 0.447028,
    0.006302, -0.006352,
};

float Cg_init[2] = {
    -0.678346, -0.678342
};

float xstd_init[12] = {
    0.003442, 0.001215, 0.105445, 0.171532, 0.001468, 0.000454, 0.022173, 0.074793, 0.000532, 0.000082, 0.017276, 0.064247
};

float xmean_init[12] = {
    0.009766, -0.006301, 0.169647, 0.587121, 0.003204, -0.007722, 0.006212, 0.051212, 0.003106, -0.007812, 0.004899, 0.066137
};

