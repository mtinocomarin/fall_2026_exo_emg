// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_11\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 86.25%
// test_accuracy: 76.56%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_16.txt']}
// generated: 2025-12-12 16:07:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.139616, 1.139661,
    -0.028575, 0.028594,
    0.624752, -0.624790,
    0.968301, -0.968308,
    1.137078, -1.137213,
    -1.258402, 1.258562,
    -0.052607, 0.052595,
    -0.089604, 0.089597,
    -0.581255, 0.581408,
    0.598718, -0.599063,
    -0.581680, 0.581807,
    0.149049, -0.148899,
};

float Cg_init[2] = {
    -0.521515, -0.521569
};

float xstd_init[12] = {
    0.003801, 0.001414, 0.101863, 0.171370, 0.001711, 0.000529, 0.030674, 0.085053, 0.001535, 0.000090, 0.019323, 0.066700
};

float xmean_init[12] = {
    0.009851, -0.006278, 0.166267, 0.581300, 0.003333, -0.007697, 0.008333, 0.055100, 0.003291, -0.007805, 0.005733, 0.069500
};

