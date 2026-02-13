// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.80%
// test_accuracy: 74.11%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 15:50:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.574802, 0.574847,
    -0.424438, 0.424449,
    0.531845, -0.531897,
    0.658576, -0.658565,
    0.936291, -0.936306,
    -0.731843, 0.731910,
    -0.249540, 0.249499,
    -0.077301, 0.077286,
    -0.592015, 0.592156,
    0.413703, -0.414021,
    -0.325459, 0.325562,
    0.099081, -0.098952,
};

float Cg_init[2] = {
    -0.337093, -0.337123
};

float xstd_init[12] = {
    0.003544, 0.001333, 0.104802, 0.173612, 0.001375, 0.000390, 0.021487, 0.069699, 0.001701, 0.000090, 0.015530, 0.069272
};

float xmean_init[12] = {
    0.009738, -0.006257, 0.178175, 0.589464, 0.003113, -0.007762, 0.005476, 0.047976, 0.003269, -0.007807, 0.003770, 0.068393
};

