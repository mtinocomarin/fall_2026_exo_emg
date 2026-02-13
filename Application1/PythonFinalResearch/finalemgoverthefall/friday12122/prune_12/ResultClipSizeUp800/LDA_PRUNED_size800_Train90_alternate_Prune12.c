// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_12\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.83%
// test_accuracy: 78.33%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_32.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_34.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-12 16:08:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.820108, 0.820211,
    -0.197467, 0.197424,
    0.619124, -0.619166,
    0.632425, -0.632433,
    0.990583, -0.990527,
    -0.990138, 0.990097,
    -0.176115, 0.176093,
    -0.109127, 0.109129,
    0.699712, -0.699486,
    0.122055, -0.122711,
    -0.433083, 0.433344,
    -0.015992, 0.016210,
};

float Cg_init[2] = {
    -0.549771, -0.549792
};

float xstd_init[12] = {
    0.003284, 0.001264, 0.103331, 0.167079, 0.001245, 0.000385, 0.019770, 0.068643, 0.000522, 0.000074, 0.015110, 0.062691
};

float xmean_init[12] = {
    0.009616, -0.006294, 0.175371, 0.589833, 0.003074, -0.007755, 0.005333, 0.047833, 0.003092, -0.007816, 0.003741, 0.062945
};

